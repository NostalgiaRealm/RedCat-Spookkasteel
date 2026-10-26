/*
 * FUN_00605c41 at 00605c41
 * undefined FUN_00605c41(void)
 * Address ranges: 00605c41-00605c70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00605c41(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) && (*(char *)(iVar1 + -1) != '\0')) && (*(char *)(iVar1 + -1) != -1)) {
    FUN_00605987(1);
    uVar2 = FUN_0060f51c(iVar1);
    FUN_006056f2(iVar1,uVar2);
  }
  return;
}

