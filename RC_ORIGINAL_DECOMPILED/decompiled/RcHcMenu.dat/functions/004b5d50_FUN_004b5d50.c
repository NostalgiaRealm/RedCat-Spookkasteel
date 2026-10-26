/*
 * FUN_004b5d50 at 004b5d50
 * undefined __register FUN_004b5d50(int * param_1, undefined4 * param_2)
 * Address ranges: 004b5d50-004b6035
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b5d50(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_174;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  _union_2683 local_154;
  int local_144;
  int local_140;
  byte local_13c [256];
  int local_3c;
  int local_38;
  byte local_34 [28];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  int *local_8;
  
  puStack_160 = &stack0xfffffffc;
  local_154._0_4_ = 0;
  local_154.decVal.Hi32 = 0;
  local_154._8_4_ = 0;
  local_154._12_4_ = 0;
  local_140 = 0;
  local_144 = 0;
  local_38 = 0;
  local_3c = 0;
  local_10 = *param_2;
  uStack_c = param_2[1];
  puStack_164 = &LAB_004b6036;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  local_8 = param_1;
  bVar1 = FUN_0045a244((int)&local_10);
  if (bVar1) {
    local_14 = (int *)FUN_0045a264(&local_10);
    if (local_14 == (int *)0x0) {
      FUN_00402fe0(*local_8,local_13c);
      FUN_00403fd4(&local_3c,local_13c);
      pcStack_174 = "Object not assigned";
      FUN_004040f0(&local_38,3);
      FUN_00403d94(local_38);
    }
    uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_004b25f4);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_004b2664);
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_0048e660);
        if ((char)uVar2 == '\0') {
          uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_004b26d8);
          if ((char)uVar2 == '\0') {
            uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_0048e834);
            if ((char)uVar2 == '\0') {
              uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_004b2824);
              if ((char)uVar2 == '\0') {
                local_18 = (int *)0x0;
                FUN_00402fe0(*local_8,local_13c);
                FUN_00403fd4(&local_144,local_13c);
                FUN_004040f0(&local_140,3);
                FUN_00403d94(local_140);
              }
              else {
                puVar3 = (undefined4 *)FUN_00403224(local_14,(int)&PTR_FUN_004b2824);
                local_18 = (int *)(**(code **)*puVar3)();
              }
            }
            else {
              piVar4 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_0048e834);
              iVar5 = FUN_00494858(piVar4);
              local_18 = (int *)FUN_004b2ca8((int *)&PTR_FUN_004b25f4,'\x01',
                                             *(undefined4 **)(iVar5 + 0x3c));
            }
          }
          else {
            iVar5 = FUN_00403224(local_14,(int)&PTR_FUN_004b26d8);
            local_18 = (int *)FUN_004b2ca8((int *)&PTR_FUN_004b25f4,'\x01',
                                           *(undefined4 **)(iVar5 + 4));
            FUN_00403094(local_14);
          }
        }
        else {
          if (local_8[6] == 0) {
            piVar4 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_0048e660);
            FUN_00495f2c(piVar4,local_34);
          }
          else {
            iVar5 = FUN_004b5bd8(local_8);
            piVar4 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_0048e660);
            FUN_0048cfb4(iVar5,piVar4,local_34);
          }
          local_18 = FUN_004b2ec0((int *)&PTR_FUN_004b2750,'\x01',(int *)local_34);
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_00403224(local_14,(int)&PTR_FUN_004b2664);
        local_18 = (int *)(**(code **)*puVar3)();
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_00403224(local_14,(int)&PTR_FUN_004b25f4);
      local_18 = (int *)(**(code **)*puVar3)();
    }
  }
  else {
    FUN_0045a2ec(&local_10,(VARIANTARG *)&local_154.n2);
    local_18 = (int *)FUN_004b2fa8((int *)&PTR_FUN_004b27b0,'\x01',(undefined4 *)&local_154);
  }
  FUN_004b60dc(local_8,local_18);
  *in_FS_OFFSET = pcStack_174;
  FUN_00405bcc((VARIANTARG *)&local_154.n2);
  FUN_00403dd4(&local_144,2);
  FUN_00403dd4(&local_3c,2);
  return;
}

