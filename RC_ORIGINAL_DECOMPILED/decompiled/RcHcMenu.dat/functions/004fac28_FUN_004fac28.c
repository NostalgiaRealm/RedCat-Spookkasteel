/*
 * FUN_004fac28 at 004fac28
 * undefined __register FUN_004fac28(int * param_1)
 * Address ranges: 004fac28-004fad75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f9f8c slot 1 for TOAFKComboBoxInterface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f9f8c slot 1 for
   TOAFKComboBoxInterface. Original bytes unchanged; names and types still inferred. */

void FUN_004fac28(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_004fad76;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_1;
  if (param_1[3] != 0) {
    local_c = (int *)FUN_00403224((int *)param_1[2],(int)&PTR_FUN_004fa08c);
    uVar3 = FUN_005430c8((int)local_c);
    if ((char)uVar3 == '\0') {
      cVar2 = FUN_00543134((int)local_c);
      if (cVar2 == '\0') {
        piVar4 = (int *)FUN_004949bc((int *)local_c[0x8b]);
        cVar2 = (**(code **)(*piVar4 + 0x4c))();
        if (cVar2 == '\0') {
          if ((char)local_c[0x8a] == '\0') {
            FUN_00402fe0(*local_8,local_114);
            FUN_00403fd4(&local_14,local_114);
            FUN_004040f0(&local_10,3);
            FUN_00403d94(local_10);
          }
          (**(code **)(*(int *)local_8[3] + 0x68))();
        }
        else {
          FUN_004fadec(local_c,(int *)local_c[0x8b]);
        }
      }
      else {
        FUN_004f1368((int)local_8,(int *)local_8[3]);
      }
    }
    else {
      bVar1 = FUN_00405c2c((short *)(local_c + 0xa2));
      if (bVar1) {
        (**(code **)(*(int *)local_8[3] + 0x60))();
      }
      else {
        FUN_004964d0((int *)local_8[3],local_c + 0xa2);
      }
    }
  }
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004fad7d;
  puStack_11c = (undefined1 *)0x4fad75;
  FUN_00403dd4(&local_14,2);
  return;
}

