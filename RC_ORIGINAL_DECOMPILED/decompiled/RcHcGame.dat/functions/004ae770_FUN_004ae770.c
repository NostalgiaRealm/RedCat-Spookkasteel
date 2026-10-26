/*
 * FUN_004ae770 at 004ae770
 * undefined FUN_004ae770(void)
 * Address ranges: 004ae770-004ae7f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ae770(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064ead0;
  if (param_1[0x21] != 0) {
    FUN_0060b25d(param_1[0x21]);
    param_1[0x21] = 0;
  }
  if (param_1[0x2c] != 0) {
    FUN_0060b25d(param_1[0x2c]);
    param_1[0x2c] = 0;
  }
  iVar2 = param_1[0x15];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      FUN_004ad8d0();
      return;
    }
    FUN_005fe5f0((char *)(iVar2 + -1));
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_004ad8d0();
  return;
}

