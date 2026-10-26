/*
 * FUN_0053cb70 at 0053cb70
 * undefined FUN_0053cb70(void)
 * Address ranges: 0053cb70-0053cbb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0053cb70(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    }
    if (iVar1 <= iVar2) break;
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x18) + iVar2 * 4) + 0x28) == '\0') {
      FUN_0053bf30(param_2);
    }
    iVar2 = iVar2 + 1;
  }
  FUN_005117a0();
  return;
}

