/*
 * FUN_0053938c at 0053938c
 * undefined __register FUN_0053938c(int * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 0053938c-005394b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053938c(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  puStack_24 = &LAB_005394b3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(int *)(param_2 + 100) = param_3;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  piVar2 = (int *)(**(code **)(param_3 + 0x2c))(param_3,1,0);
  uVar3 = FUN_00403224(piVar2,(int)&PTR_FUN_0042ebec);
  *(undefined4 *)(local_c + 0x68) = uVar3;
  FUN_0043262c(*(int **)(local_c + 0x68),0,extraout_ECX);
  uVar3 = FUN_00538860(local_8);
  (**(code **)(**(int **)(local_c + 0x68) + 0x60))(*(int **)(local_c + 0x68),uVar3);
  piVar2 = FUN_00406aa0((int *)&local_18);
  cVar1 = FUN_00403128(*(int **)(local_c + 0x68),(int *)&DAT_005394c4,piVar2);
  if (cVar1 != '\0') {
    iVar4 = FUN_00496d84(param_4);
    if ((*(byte *)(iVar4 + 0x18) & 0x20) == 0) {
      (**(code **)(*local_18 + 0x68))(local_18,1);
    }
    else {
      (**(code **)(*local_18 + 0x68))(local_18,0);
    }
  }
  piVar2 = (int *)FUN_00495ec0(param_4);
  piVar5 = FUN_00406aa0((int *)&local_14);
  cVar1 = FUN_00403128(piVar2,(int *)&DAT_005394d4,piVar5);
  if (cVar1 == '\0') {
    puVar6 = (undefined4 *)FUN_00495ec0(param_4);
    piVar2 = FUN_00536888(local_8[0xb5],puVar6,extraout_ECX_00);
    (**(code **)(*piVar2 + 8))(piVar2,param_4,*(undefined4 *)(local_c + 0x68));
  }
  else {
    (**(code **)(*local_14 + 0x10))(local_14,*(undefined4 *)(local_c + 0x68),param_4);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005394ba;
  puStack_24 = (undefined1 *)0x5394aa;
  FUN_00406aa0((int *)&local_18);
  puStack_24 = (undefined1 *)0x5394b2;
  FUN_00406aa0((int *)&local_14);
  return;
}

