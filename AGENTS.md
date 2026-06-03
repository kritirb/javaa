# AI Agent Guidance for this Java Workspace

## Project overview
- This workspace contains a small Java project with source files in the `Java/` folder and a top-level `NewspaperCoverPage.java`.
- There is no Maven, Gradle, or other build configuration present.
- Java files are written in the default package.

## Key source files
- `Java/Main.java` — a console-based entry point that instantiates `Bike`, `Car`, and `Truck`.
- `Java/app.java` — a Swing GUI example using `JFrame`.
- `Java/abc.java` — a Swing GUI sample with input fields and a button.
- `Java/Car.java`, `Java/Bike.java`, `Java/Truck.java` — vehicle classes used by `Main`.
- `NewspaperCoverPage.java` — another top-level Java class in the root.

## Build and run guidance
- Compile with `javac Java/*.java` from the workspace root.
- Run a specific main class with:
  - `java -cp Java Main`
  - `java -cp Java app`
  - `java -cp Java abc`
  - `java -cp . NewspaperCoverPage`
- For GUI classes, manual verification is expected.

## Agent behavior
- Prefer minimal, direct edits: update existing files rather than creating new build tooling.
- Preserve current file names and class names.
- Do not assume external dependencies or packages beyond standard Java SE.
- If asked for tests, note that this workspace does not include a test framework or test sources.

## Notes for future customization
- If more structure is added later, a dedicated `.github/copilot-instructions.md` or a project-specific skill may be useful.
