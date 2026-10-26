/*
 * FUN_00467570 at 00467570
 * undefined __register FUN_00467570(int param_1, int * param_2)
 * Address ranges: 00467570-0046763e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467570(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uStack_228;
  undefined1 *puStack_224;
  undefined1 *puStack_220;
  int local_210;
  byte local_20c [256];
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_220 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_210 = 0;
  puStack_224 = &LAB_0046763f;
  uStack_228 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_228;
  if ((param_2[3] == 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    pbVar2 = local_10c;
    FUN_00402fe0(*param_2,local_20c);
    FUN_004028e8(local_20c,2,5,pbVar2);
    FUN_00403fd4(&local_c,local_10c);
    iVar3 = local_c;
    FUN_00409bd8(param_2[2] + 1,&local_210);
    iVar1 = local_210;
    FUN_004040f0(&local_8,3);
    (**(code **)(*param_2 + 0x14))(param_2,local_8,*param_2,iVar1,iVar3);
  }
  *in_FS_OFFSET = uStack_228;
  puStack_220 = &LAB_00467646;
  puStack_224 = (undefined1 *)0x46762e;
  FUN_00403db0(&local_210);
  puStack_224 = (undefined1 *)0x467636;
  FUN_00403db0(&local_c);
  puStack_224 = (undefined1 *)0x46763e;
  FUN_00403db0(&local_8);
  return;
}

