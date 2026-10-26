/*
 * FUN_004cb130 at 004cb130
 * undefined FUN_004cb130(void)
 * Address ranges: 004cb130-004cb177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cb130(char param_1,char param_2)

{
  if (param_2 == '\0') {
    if (param_1 != '\0') {
      FUN_00505400(&DAT_006b9728);
      return;
    }
    FUN_00505400(&DAT_006b9738);
    return;
  }
  if (param_1 != '\0') {
    FUN_00505400(&DAT_006b95a0);
    return;
  }
  FUN_00505400(&DAT_006b95b0);
  return;
}

