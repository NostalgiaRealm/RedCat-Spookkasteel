/*
 * FUN_005ae770 at 005ae770
 * undefined FUN_005ae770(void)
 * Address ranges: 005ae770-005ae793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ae770(char *param_1)

{
  int iVar1;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_005ae970();
    if (iVar1 != 0) {
      FUN_005ae7a0();
      FUN_005fe5f0(iVar1);
    }
  }
  return;
}

