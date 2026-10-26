/*
 * FUN_00544f98 at 00544f98
 * undefined __register FUN_00544f98(int param_1, int * param_2)
 * Address ranges: 00544f98-005450db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00544f98(int param_1,int *param_2)

{
  undefined4 ****ppppuVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *in_FS_OFFSET;
  byte *local_44;
  byte *local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  byte *local_2c;
  int local_28 [2];
  undefined4 ****local_20;
  undefined1 **ppuVar6;
  int local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  int *local_c;
  int local_8;
  
  local_10 = &stack0xfffffffc;
  iVar5 = 8;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_14 = &LAB_005450dc;
  local_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_18;
  local_c = param_2;
  local_8 = param_1;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x310) + 8))();
  if (iVar5 < 2) {
    piVar3 = &local_34;
    local_20 = (undefined4 ****)0x54504d;
    piVar4 = (int *)FUN_00549b64(*(int *)(local_8 + 0x310));
    local_20 = (undefined4 ****)0x545052;
    cVar2 = (**(code **)(*piVar4 + 8))();
    local_20 = (undefined4 ****)0x54505a;
    FUN_00460a70(cVar2,&local_38);
    piVar4 = (int *)CONCAT31((int3)((uint)piVar3 >> 8),0xb);
    local_20 = (undefined4 ****)0x545072;
    piVar3 = (int *)FUN_00549b64(*(int *)(local_8 + 0x310));
    local_20 = (undefined4 ****)0x54507a;
    (**(code **)(*piVar3 + 0x10))(piVar3,&local_40);
    local_20 = (undefined4 ****)0x545085;
    FUN_00460d1c(local_40,&local_3c);
    local_18 = local_3c;
    local_14 = (undefined1 *)CONCAT31(local_14._1_3_,0xb);
    local_20 = &local_20;
    local_28[1] = 0x5450a0;
    FUN_00406a48(&PTR_DAT_00544f90,(int *)&local_44);
    ppppuVar1 = local_20;
    local_20 = (undefined4 ****)0x5450ae;
    FUN_0040a894(local_44,ppppuVar1,1,piVar4);
    FUN_00458598(local_34,local_c);
  }
  else {
    ppuVar6 = &local_10;
    local_20 = (undefined4 ****)0x544fda;
    FUN_00460a70('\x03',local_28 + 1);
    piVar4 = (int *)CONCAT31((int3)((uint)ppuVar6 >> 8),0xb);
    local_20 = (undefined4 ****)0x544ff2;
    piVar3 = (int *)FUN_00549b64(*(int *)(local_8 + 0x310));
    local_20 = (undefined4 ****)0x544ffa;
    (**(code **)(*piVar3 + 0xc))(piVar3,&local_2c);
    local_20 = (undefined4 ****)0x545005;
    FUN_00460d1c(local_2c,local_28);
    local_18 = local_28[0];
    local_14 = (undefined1 *)CONCAT31(local_14._1_3_,0xb);
    local_20 = &local_20;
    local_28[1] = 0x545020;
    FUN_00406a48(&PTR_DAT_00544f90,(int *)&local_30);
    ppppuVar1 = local_20;
    local_20 = (undefined4 ****)0x54502e;
    FUN_0040a894(local_30,ppppuVar1,1,piVar4);
    FUN_00458598((int)local_10,local_c);
  }
  *in_FS_OFFSET = local_18;
  local_10 = &LAB_005450e3;
  local_14 = (undefined1 *)0x5450d3;
  FUN_00403dd4((int *)&local_44,9);
  local_14 = (undefined1 *)0x5450db;
  FUN_00403db0((int *)&local_10);
  return;
}

