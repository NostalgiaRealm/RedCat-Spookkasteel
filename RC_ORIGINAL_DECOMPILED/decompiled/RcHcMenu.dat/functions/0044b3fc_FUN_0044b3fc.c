/*
 * FUN_0044b3fc at 0044b3fc
 * undefined4 __register FUN_0044b3fc(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int * param_7)
 * Address ranges: 0044b3fc-0044b42a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_0044b3fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = FUN_00403064((int *)&DAT_00447e98,'\x01',param_3);
  *(undefined4 *)(iVar1 + 4) = param_4;
  *(int *)(iVar1 + 8) = param_7[2];
  iVar1 = FUN_004121d8(param_7,iVar1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

