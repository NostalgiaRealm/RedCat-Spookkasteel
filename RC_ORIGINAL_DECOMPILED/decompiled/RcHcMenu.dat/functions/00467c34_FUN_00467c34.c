/*
 * FUN_00467c34 at 00467c34
 * undefined __register FUN_00467c34(int * param_1, undefined4 param_2, int param_3, char param_4, uint * param_5)
 * Address ranges: 00467c34-00467d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467c34(int *param_1,undefined4 param_2,int param_3,char param_4,uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  uint *puVar6;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  uint *local_c;
  int local_8;
  
  local_c = (uint *)0x0;
  *in_FS_OFFSET = &stack0xffffffcc;
  local_8 = FUN_00467a6c((int)param_1,param_2,param_3,param_5);
  if ((param_4 != '\0') && (uVar1 = FUN_00467918((int)param_1), (char)uVar1 != '\0')) {
    if (*(char *)((int)param_1 + 0x21) == '\x1b') {
      if (*(char *)(*(int *)(param_1[1] + 0x1c) + 0x9a) == '\0') {
        iVar2 = FUN_00467870((int)param_1);
      }
      else {
        iVar2 = 1;
      }
      if (-1 < iVar2 + -1) {
        iVar5 = 0;
        do {
          local_1c = *(undefined4 *)(local_8 + 0x2c);
          local_18 = 0xb;
          local_10 = 0;
          local_14 = iVar5;
          FUN_0040a894((byte *)"%s[%d]",&local_1c,1,(int *)&local_c);
          param_5 = (uint *)0x1;
          puVar6 = local_c;
          iVar3 = FUN_004678e0(param_1);
          piVar4 = (int *)FUN_00467ef4(iVar3,0);
          FUN_00467c34(piVar4,0,local_8,(char)param_5,puVar6);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar2 = FUN_004678e0(param_1);
      iVar2 = FUN_0041300c(iVar2);
      if (-1 < iVar2 + -1) {
        iVar5 = 0;
        do {
          puVar6 = (uint *)0x0;
          param_5 = (uint *)0x1;
          iVar3 = FUN_004678e0(param_1);
          piVar4 = (int *)FUN_00467ef4(iVar3,iVar5);
          FUN_00467c34(piVar4,0,local_8,(char)param_5,puVar6);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  *in_FS_OFFSET = param_5;
  FUN_00403db0((int *)&local_c);
  return;
}

