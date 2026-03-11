import re
from pathlib import Path

ROOT = Path(r"c:\Users\HP\OneDrive\Desktop\A\Studywork\Vscode_practice_all\javascript\Full_course-code")

code_block_re = re.compile(r"```(?:[a-zA-Z0-9]*)\n([\s\S]*?)\n```", re.M)
heading_re = re.compile(r"^#{1,3}\s*(.+)$", re.M)

for md in ROOT.rglob('*.md'):
    try:
        text = md.read_text(encoding='utf-8')
    except Exception:
        continue
    title_match = heading_re.search(text)
    title = title_match.group(1).strip() if title_match else md.stem
    code_match = code_block_re.search(text)
    example = code_match.group(0) if code_match else None

    easy_lines = []
    easy_lines.append(f"# {title} — Easy Step-by-Step")
    easy_lines.append("")
    easy_lines.append("## Goal")
    easy_lines.append(f"Learn the main idea of '{title}' with short steps.")
    easy_lines.append("")
    easy_lines.append("## Prerequisites")
    easy_lines.append("- Basic JavaScript knowledge")
    easy_lines.append("")
    easy_lines.append("## Quick Steps")
    easy_lines.append("1. Read the short summary below.")
    easy_lines.append("2. Try the example code in a browser console or Node.js.")
    easy_lines.append("3. Do the practice exercises at the end.")
    easy_lines.append("")
    if example:
        easy_lines.append("## Example")
        easy_lines.append(example)
        easy_lines.append("")
    easy_lines.append("## Summary")
    # take first 6 non-empty lines (non-heading) from original as a short summary
    body_lines = [l.strip() for l in text.splitlines() if l.strip() and not l.strip().startswith('#')]
    summary = "\n\n".join(body_lines[:6])
    if summary:
        easy_lines.append(summary)
        easy_lines.append("")

    easy_lines.append("## Exercises")
    easy_lines.append("1. Reproduce the example and modify one value.")
    easy_lines.append("2. Write a small function that uses the concept.")
    easy_lines.append("")
    easy_lines.append("---")
    easy_lines.append("\n<details>\n<summary>Full original content</summary>\n\n")
    easy_lines.append(text)
    easy_lines.append("\n</details>")

    out = md.with_name(md.stem + '-easy.md')
    try:
        out.write_text('\n'.join(easy_lines), encoding='utf-8')
        print(f"Wrote: {out}")
    except Exception as e:
        print(f"Failed {out}: {e}")
