/*
 * FUN_0049517c at 0049517c
 * undefined __register FUN_0049517c(int * param_1, int * param_2, byte * param_3)
 * Address ranges: 0049517c-00495257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049517c(int *param_1,int *param_2,byte *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *in_FS_OFFSET;
  byte bVar8;
  int iStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  int local_38;
  undefined4 local_34;
  int local_30;
  byte local_2c [28];
  byte *local_10;
  int *local_c;
  int *local_8;
  
  bVar8 = 0;
  puStack_48 = &stack0xfffffffc;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  puStack_4c = &LAB_00495258;
  iStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_50;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0048e078((undefined4 *)local_2c);
  FUN_0048e078((undefined4 *)local_10);
  bVar1 = FUN_00493e54(local_8,local_2c);
  if (bVar1) {
    do {
      piVar3 = (int *)FUN_00494c5c(local_8,local_2c);
      if (piVar3 == local_c) {
        pbVar6 = local_2c;
        pbVar7 = local_10;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pbVar7 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + ((uint)bVar8 * -2 + 1) * 4;
          pbVar7 = pbVar7 + (uint)bVar8 * -8 + 4;
        }
        break;
      }
      cVar2 = FUN_00493e78(local_8,local_2c);
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_0048e094(local_10);
  if ((char)uVar4 == '\0') {
    (**(code **)(*local_c + 8))(local_c,&local_34,*local_c,"TAppObj.FindPropRef: Can\'t find ");
    (**(code **)(*local_8 + 8))(local_8,&local_38,*local_8,&DAT_0049529c,local_34);
    iStack_50 = local_38;
    FUN_004040f0(&local_30,4);
    FUN_00459bd4(local_30);
  }
  *in_FS_OFFSET = iStack_50;
  puStack_48 = &LAB_0049525f;
  puStack_4c = (undefined1 *)0x495257;
  FUN_00403dd4(&local_38,3);
  return;
}

