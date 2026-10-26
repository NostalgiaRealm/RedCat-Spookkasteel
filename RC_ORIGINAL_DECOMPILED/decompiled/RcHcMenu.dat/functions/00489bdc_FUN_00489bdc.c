/*
 * FUN_00489bdc at 00489bdc
 * undefined __register FUN_00489bdc(int * param_1, int * param_2)
 * Address ranges: 00489bdc-00489d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x489774 slot 0 for TStringPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x489774 slot 0 for
   TStringPropDesc. Original bytes unchanged; names and types still inferred. */

void FUN_00489bdc(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_FS_OFFSET;
  undefined4 **ppuVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined4 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_34 = (undefined4 *)0x0;
  local_2c = 0;
  local_30 = (byte *)0x0;
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  piVar8 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xfffffec0;
  local_c = param_2;
  local_8 = param_1;
  cVar2 = (**(code **)(*param_2 + 0x50))();
  if (cVar2 == '\0') {
    local_10 = (int *)FUN_00403224(local_c,(int)&PTR_FUN_004897ec);
    if (0 < local_8[0xc]) {
      (**(code **)(*local_10 + 0x6c))(local_10,&local_18);
      iVar3 = FUN_00404030(local_18);
      if (local_8[0xc] < iVar3) {
        ppuVar6 = &local_14;
        iVar3 = FUN_00496d84((int)local_c);
        FUN_00409804(*(undefined **)(iVar3 + 0x24),&local_2c);
        local_28 = local_2c;
        local_24 = 0xb;
        local_20 = local_8[0xc];
        local_1c = 0;
        FUN_00406a48((undefined4 *)&LAB_004898e4,(int *)&local_30);
        FUN_0040a894(local_30,&local_28,1,(int *)ppuVar6);
        puVar1 = local_14;
        pcVar7 = "DoValidate";
        piVar4 = (int *)FUN_00495ee0((int)local_c);
        piVar8 = local_c;
        FUN_00402fe0(*local_8,&stack0xfffffecc);
        FUN_00403fd4((int *)&local_34,&stack0xfffffecc);
        uVar5 = FUN_004905f8((int *)&DAT_004898cc,'\x01',local_34,(int)piVar8,piVar4,puVar1,
                             (int)puVar1,(undefined4 *)pcVar7);
        FUN_0040382c(uVar5);
      }
    }
  }
  *in_FS_OFFSET = (int)piVar8;
  FUN_00403dd4((int *)&local_34,3);
  FUN_00403dd4(&local_18,2);
  return;
}

