/*
 * FUN_004a0220 at 004a0220
 * undefined FUN_004a0220(void)
 * Address ranges: 004a0220-004a02b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004a0220(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062ce48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  piVar1 = *(int **)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 4);
  local_4 = 0xffffffff;
  for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x14) + -1;
      *(int *)(iVar2 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0(0);
      }
      *piVar4 = 0;
    }
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

