const fs = require('fs');
const path = require('path');

const root = path.join(__dirname, '..', 'javascript', 'Full_course-code');

function uniqueDest(parent, name) {
  const parsed = path.parse(name);
  let candidate = name;
  let counter = 1;
  while (fs.existsSync(path.join(parent, candidate))) {
    const suffix = `-from-tutorial${counter > 1 ? '-' + counter : ''}`;
    candidate = parsed.name + suffix + parsed.ext;
    counter++;
  }
  return path.join(parent, candidate);
}

function processTutorial(dir) {
  const parent = path.dirname(dir);
  const entries = fs.readdirSync(dir);
  for (const entry of entries) {
    const src = path.join(dir, entry);
    const dest = uniqueDest(parent, entry);
    try {
      fs.renameSync(src, dest);
      console.log('Moved:', path.relative(process.cwd(), src), '->', path.relative(process.cwd(), dest));
    } catch (err) {
      console.error('Failed to move', src, err.message);
    }
  }
  try {
    fs.rmdirSync(dir, { recursive: true });
    console.log('Removed folder:', path.relative(process.cwd(), dir));
  } catch (err) {
    console.error('Failed to remove folder', dir, err.message);
  }
}

function walk(dir) {
  const entries = fs.readdirSync(dir, { withFileTypes: true });
  for (const entry of entries) {
    const full = path.join(dir, entry.name);
    if (entry.isDirectory()) {
      if (entry.name === '.tutorial') {
        processTutorial(full);
      } else {
        walk(full);
      }
    }
  }
}

if (!fs.existsSync(root)) {
  console.error('Root not found:', root);
  process.exit(1);
}

walk(root);
console.log('Done moving `.tutorial` contents.');
