/*
 * FUN_005355ac at 005355ac
 * undefined __register FUN_005355ac(int * param_1)
 * Address ranges: 005355ac-0053588a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x534610 slot 1 for TOAFKComboBox2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x534610 slot 1 for
   TOAFKComboBox2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_005355ac(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined4 *local_160;
  byte *local_15c;
  int local_158;
  byte *local_154;
  int local_150;
  int local_14c;
  undefined1 local_148;
  int local_144;
  undefined1 local_140;
  byte local_13c [256];
  ULONG local_3c;
  int local_38;
  undefined1 local_34 [16];
  char *local_24 [2];
  char *pcVar7;
  char *pcVar8;
  int *in_stack_fffffff4;
  char *pcVar9;
  
  iVar6 = 0x2b;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffe4;
  if (param_1[3] != 0) {
    local_24[1] = (char *)0x5355eb;
    iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_0052ec34);
    local_24[1] = (char *)0x5355f3;
    cVar1 = FUN_00530478(iVar6,(VARIANT *)local_24);
    if (cVar1 == '\0') {
      local_24[1] = (char *)0x53562b;
      iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_0052ec34);
      local_24[1] = (char *)0x535630;
      uVar3 = FUN_005017b8(iVar6);
      if ((char)uVar3 == '\0') {
        local_24[1] = (char *)0x535658;
        iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_0052ec34);
        local_24[1] = (char *)0x53565d;
        uVar3 = FUN_00533cb0(iVar6);
        if ((char)uVar3 == '\0') {
          local_24[1] = (char *)0x535672;
          iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_0052ec34);
          local_24[1] = (char *)0x535677;
          piVar4 = (int *)FUN_00532e58(iVar6);
          local_24[1] = (char *)0x53567c;
          piVar4 = (int *)FUN_004949bc(piVar4);
          local_24[1] = (char *)0x535684;
          FUN_00496550(piVar4,(VARIANT *)local_34);
          local_24[1] = (char *)0x535692;
          FUN_004964d0((int *)param_1[3],(undefined4 *)local_34);
        }
        else {
          local_24[1] = (char *)0x5356a8;
          iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_0052ec34);
          if (*(char *)(iVar6 + 0x244) == '\0') {
            local_24[1] = (char *)0x5356c1;
            FUN_00402fe0(*param_1,local_13c);
            local_24[1] = (char *)0x5356cf;
            FUN_00403fd4((int *)&local_3c,local_13c);
            local_24[1] = (char *)local_3c;
            local_24[0] = ".DoCopyDataToAppProp: ";
            local_34._12_4_ = " Internal inconsistency";
            local_34._8_4_ = 0x5356e9;
            FUN_004040f0(&local_38,3);
            local_34._8_4_ = 0x5356fb;
            FUN_00403d94(local_38);
          }
          local_34._8_4_ = 0x53570c;
          iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_005348fc);
          local_34._8_4_ = 0x535711;
          piVar4 = (int *)FUN_00535924(iVar6);
          local_34._8_4_ = 0x53571c;
          piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_0048ce0c);
          local_34._8_4_ = 0x535721;
          piVar4 = (int *)FUN_004744a0(piVar4);
          local_34._8_4_ = &stack0xfffffff4;
          local_34._4_4_ = 0x535736;
          (**(code **)(*piVar4 + 0x34))(piVar4,&local_154);
          FUN_00460d1c(local_154,&local_150);
          local_14c = local_150;
          local_148 = 0xb;
          iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_0052ec34);
          FUN_005017d8(iVar6,&local_158);
          local_144 = local_158;
          local_140 = 0xb;
          piVar4 = &local_14c;
          FUN_00406a48(&PTR_DAT_005355a4,(int *)&local_15c);
          FUN_0040a894(local_15c,piVar4,1,in_stack_fffffff4);
          pcVar9 = ".DoCopyDataToAppProp: ";
          pcVar8 = "Not existing item selected.";
          pcVar7 = ".DoCopyDataToAppProp: ";
          iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_005348fc);
          iVar6 = FUN_00535924(iVar6);
          uVar3 = FUN_00495ee0(iVar6);
          iVar6 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_005348fc);
          uVar5 = FUN_00535924(iVar6);
          local_24[1] = (char *)0x535802;
          FUN_00402fe0(*param_1,local_13c);
          local_24[1] = (char *)0x535813;
          FUN_00403fd4((int *)&local_160,local_13c);
          local_24[1] = (char *)0x535825;
          uVar3 = FUN_004905f8((int *)&DAT_005345b4,'\x01',local_160,uVar5,(int *)uVar3,
                               (undefined4 *)pcVar7,(int)pcVar8,(undefined4 *)pcVar9);
          local_24[1] = (char *)0x53582a;
          FUN_0040382c(uVar3);
        }
      }
      else {
        local_24[1] = (char *)0x535642;
        FUN_004f1368((int)param_1,(int *)param_1[3]);
      }
    }
    else {
      local_24[1] = (char *)0x5355ff;
      bVar2 = FUN_00405c2c((short *)local_24);
      if (bVar2) {
        local_24[1] = (char *)0x535615;
        FUN_004f1368((int)param_1,(int *)param_1[3]);
      }
    }
  }
  *in_FS_OFFSET = uVar5;
  FUN_00403dd4((int *)&local_160,2);
  FUN_00403db0(&local_158);
  FUN_00403dd4((int *)&local_154,2);
  FUN_00403dd4((int *)&local_3c,2);
  FUN_00404878((VARIANTARG *)local_34,&DAT_00401108,2);
  FUN_00403db0((int *)&stack0xfffffff4);
  return;
}

