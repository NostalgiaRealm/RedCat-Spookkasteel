/*
 * FUN_004229bc at 004229bc
 * undefined __register FUN_004229bc(int param_1)
 * Address ranges: 004229bc-00422a31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004229bc(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [2];
  short local_12;
  ushort local_10;
  undefined1 local_c [4];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int **)(iVar1 + 0xc) != (int *)0x0)) {
    FUN_004147c0(*(int **)(iVar1 + 0xc),0);
    uStack_18 = 0x4229e9;
    FUN_00414804(*(int **)(iVar1 + 0xc),auStack_14,6);
    if (local_12 != 0) {
      if (local_12 == 1) {
        uStack_18 = 6;
        FUN_0041dda4(*(int **)(iVar1 + 0xc),local_c,(uint)local_10,(int *)(iVar1 + 0x10),
                     (int *)(param_1 + 0x24));
      }
      else {
        uStack_18 = 0x422a25;
        FUN_0041d250();
      }
    }
    *(undefined4 *)(iVar1 + 8) = uStack_18;
  }
  return;
}

