## To run the entire thing

```bash
node generate_code.js
```

## To run Manually

```bash
openapi-generator-cli generate -i event_sourcing.yaml -g typescript-fetch -o ./typescript-client --skip-validate-spec

```

## Option 1: Git Submodules

Git submodules allow you to keep another Git repository as a subdirectory in your current repository. This can be useful if you want to store your generated code in a separate repository (e.g., ideariver.generated) and include it in both your ideariver.core TypeScript and Python packages.

## Steps:

Create a separate repository for your generated code: You can create a repository called ideariver.generated to store the generated TypeScript and Python files.

Example repository structure:

```javascript
/ideariver.generated 
  /typescript 
    /plugin_metadata
    /event_sourcing 
  /python
    /plugin_metadata 
    /event_sourcing;
```

Add the generated repository as a submodule to both the TypeScript and Python projects.

In your TypeScript package (ideariver.core for npm):

```bash
cd /path/to/ideariver.core
git submodule add https://github.com/your-org/ideariver.generated.git src/models/generated
git submodule update --init --recursive
```

In your Python package (ideariver.core for PyPI):

```bash
cd /path/to/ideariver.core
git submodule add https://github.com/your-org/ideariver.generated.git ideariver_core/models/generated
git submodule update --init --recursive
```

## Update the submodules when the generated code changes.

Whenever you regenerate the code in the ideariver.generated repository, you can update the submodule references in your ideariver.core repositories by running:

```bash
git submodule update --remote
```

Commit the changes: After updating the submodules, commit the changes in your ideariver.core repository.

```bash
git commit -am "Updated generated code"
git push
```
