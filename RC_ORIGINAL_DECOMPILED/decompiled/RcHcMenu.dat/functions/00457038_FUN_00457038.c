/*
 * FUN_00457038 at 00457038
 * undefined __register FUN_00457038(uint * param_1, byte param_2, ushort param_3, undefined4 * param_4, int param_5, int param_6, int param_7)
 * Address ranges: 00457038-004570d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00457038(uint *param_1,byte param_2,ushort param_3,undefined4 *param_4,int param_5,
                 int param_6,int param_7)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x457059;
  piVar1 = (int *)FUN_00456aa4(param_1,param_2,param_3);
  puStack_20 = &LAB_004570d8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1[0x54] = param_7;
  puStack_1c = &stack0xfffffffc;
  FUN_00403e04(piVar1 + 0x89,param_4);
  if (-1 < param_6) {
    FUN_00431f34(piVar1,param_6);
  }
  if (-1 < param_5) {
    FUN_00431f54(piVar1,param_5);
  }
  if ((param_5 < 0) && (param_6 < 0)) {
    FUN_0044b8ac((int)piVar1,'\x04');
  }
  (**(code **)(*piVar1 + 0xd8))();
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004570df;
  puStack_20 = (undefined1 *)0x4570d7;
  FUN_00403094(piVar1);
  return;
}

