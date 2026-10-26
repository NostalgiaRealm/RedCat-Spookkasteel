/*
 * FUN_00476a3c at 00476a3c
 * undefined __register FUN_00476a3c(int param_1, int * param_2, int param_3)
 * Address ranges: 00476a3c-00476b1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00476a3c(int param_1,int *param_2,int param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined *local_10c;
  char local_108 [256];
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10c = (undefined *)0x0;
  puStack_11c = &LAB_00476b20;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_2;
  if ((*(byte *)(param_1 + 0x2d) & 0x10) == 0) {
    FUN_004052a4((int *)&local_10c,(VARIANTARG *)(param_3 + 8));
    puVar2 = FUN_004041f4(local_10c);
    (**(code **)(**(int **)(param_1 + 4) + 0x248))(*(int **)(param_1 + 4),puVar2,local_108);
  }
  else {
    puStack_118 = &stack0xfffffffc;
    puVar2 = FUN_004041f4((undefined *)param_2[0xb]);
    (**(code **)(**(int **)(param_1 + 4) + 0x248))(*(int **)(param_1 + 4),puVar2,local_108);
  }
  iVar3 = FUN_00476b30(param_1,4,0xd,2);
  uVar1 = (**(code **)(*local_8 + 0x74))();
  FUN_00476b74(param_1,iVar3,0,uVar1);
  iVar4 = FUN_0040a108(local_108);
  uVar5 = FUN_00476250(param_1,(undefined4 *)local_108,iVar4 + 1);
  FUN_00476b74(param_1,iVar3,1,(short)uVar5);
  *in_FS_OFFSET = 1;
  puStack_11c = &LAB_00476b27;
  uStack_120 = 0x476b1f;
  FUN_00403db0((int *)&local_10c);
  return;
}

