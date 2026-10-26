/*
 * FUN_00422880 at 00422880
 * undefined FUN_00422880(void)
 * Address ranges: 00422880-004228cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422880(char param_1)

{
  if (DAT_006b51b0 == '\0') {
    if (param_1 != '\0') {
      FUN_00424d70();
    }
  }
  else if (param_1 == '\0') {
    if (0 < DAT_006b51ac) {
      FUN_00424c50();
      DAT_006b51b0 = param_1;
      return;
    }
    FUN_00424b30();
    DAT_006b51b0 = param_1;
    return;
  }
  DAT_006b51b0 = param_1;
  return;
}

