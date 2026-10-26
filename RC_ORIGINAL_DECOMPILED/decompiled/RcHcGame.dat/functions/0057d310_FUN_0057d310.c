/*
 * FUN_0057d310 at 0057d310
 * undefined FUN_0057d310(void)
 * Address ranges: 0057d310-0057d330
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0057d310(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *param_1 = 0;
  }
  return;
}

