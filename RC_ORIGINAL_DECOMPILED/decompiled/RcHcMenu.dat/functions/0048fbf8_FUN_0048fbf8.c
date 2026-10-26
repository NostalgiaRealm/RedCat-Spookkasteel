/*
 * FUN_0048fbf8 at 0048fbf8
 * undefined __register FUN_0048fbf8(undefined4 param_1, int param_2, int * param_3, char param_4, int * param_5)
 * Address ranges: 0048fbf8-0048fdc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048fbf8(undefined4 param_1,int param_2,int *param_3,char param_4,int *param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  char cVar10;
  undefined2 uVar11;
  int local_2c;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_00494858(param_3);
  iVar3 = FUN_00490bb8(iVar3);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_2c = uVar4 + 1;
    local_14 = 0;
    do {
      FUN_00494b0c(local_10,local_14,&local_20,&local_18);
      psVar5 = (short *)FUN_0049411c(local_10,local_14);
      if (1 < *psVar5) {
        return;
      }
      uVar6 = FUN_0040320c(local_18,(int)&PTR_FUN_00474230);
      if ((char)uVar6 != '\0') {
        local_1c = (int *)FUN_00403224(local_18,(int)&PTR_FUN_00474160);
        piVar7 = (int *)FUN_00403224(local_20,(int)&PTR_FUN_004740c8);
        (**(code **)(*piVar7 + 0x1c))();
        piVar8 = (int *)FUN_004744a0(local_1c);
        piVar7 = param_5;
        if ((param_4 == '\0') &&
           (iVar3 = FUN_00474478((int)local_1c), *(char *)(iVar3 + 0x38) == '\0')) {
          cVar10 = '\0';
        }
        else {
          cVar10 = '\x01';
        }
        iVar3 = FUN_0049411c(local_10,local_14);
        FUN_0048f9e4(local_c,local_1c,*(undefined2 *)(iVar3 + 2),cVar10,piVar7);
        iVar3 = FUN_0048e970();
        if (iVar3 == 0) {
          iVar3 = FUN_00494858(piVar8);
          bVar1 = FUN_004603bc((int)param_5,*(uint *)(iVar3 + 0x34));
          if ((bVar1) ||
             (iVar3 = FUN_00494858(piVar8), *(int *)(iVar3 + 0x34) == *(int *)(local_c + 0x34))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        else {
          iVar3 = FUN_00494858(piVar8);
          iVar3 = FUN_00460414((int)param_5,*(uint *)(iVar3 + 0x34));
          iVar9 = FUN_0048e970();
          bVar1 = iVar3 < iVar9;
        }
        if (bVar1) {
          iVar3 = FUN_00495f04(local_1c);
          uVar4 = iVar3 + 0x8000;
          if (0xffff < uVar4) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          sVar2 = (short)uVar4 + -0x8000;
          iVar3 = FUN_0049411c(local_10,local_14);
          uVar11 = *(undefined2 *)(iVar3 + 2);
          iVar3 = FUN_00494858(piVar8);
          FUN_0046014c(param_5,*(int *)(iVar3 + 0x34),uVar11,sVar2);
          piVar7 = param_5;
          if ((param_4 == '\0') &&
             (iVar3 = FUN_00474478((int)local_1c), *(char *)(iVar3 + 0x38) == '\0')) {
            cVar10 = '\0';
          }
          else {
            cVar10 = '\x01';
          }
          FUN_0048fbf8(local_8,local_c,piVar8,cVar10,piVar7);
          FUN_004602a4(param_5);
        }
      }
      local_14 = local_14 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return;
}

