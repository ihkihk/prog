*Version: 1.0.0*
*Author: IKA*

# Comments

## Commit comments

`[<type>] <description>`

Where `<type>` is:
* BUG - bug-fix
* NEW - new feature
* ENH - enhancement to an existing feature
* DOC - update to doc/comments
* ERR - correction of typo
* CLN - code clean
* REN - variable renaming
* REF - code refactoring (more than just REN)

## Issue titles

`[<area>][<type>] <description>`

Where `[area]` is:
* design - SW architecture & design
* code - SW code
* doc - SW doc
* test - SW doc
* gui - GUI
* devops - deployment, network
* process - SW process, e.g. testing, documentation

Where `<type>` is as above plus:
* GAP - something missing or deviant from the requirements
* REQ - requirement

Issue states are: open, closed, wip, canceled, duplicate, overriden.

## Branch titles

`br_<proj>_<type>_<usr>_<desc>`

Where `<type>` is:
* dev - development
* int - integration
* rel - release

## Fixme titles

`FIXME/TODO [<usr]: <text>."

## Code comments

`// > First-level comment`
`//   that goes on 2 lines`
`// >> Second-level comment`
`// Normal comment`
`// < First-level comment... (end)`
`// << Second-level comment (end)`

```
/*
 * Block-comment
 */
```

```
function a(b, c) {
	for (...) {
	} // end for
} // end function a(...)
```

# Versioning

We use [semantic versioning](http://semver.org).

`major.minor.patch-prerelease+build`, e.g. `1.3.2-rc1.review+160803.sha_3fcd4`.

