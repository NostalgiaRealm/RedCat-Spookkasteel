/*
 * FUN_005449d0 at 005449d0
 * undefined FUN_005449d0(void)
 * Address ranges: 005449d0-00544a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005449d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar2 <= iVar3) break;
    uVar1 = FUN_005494c0(iVar3);
    FUN_00544100(uVar1);
    iVar3 = iVar3 + 1;
  }
  return;
}

