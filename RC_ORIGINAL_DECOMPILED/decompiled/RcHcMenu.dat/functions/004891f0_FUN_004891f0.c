/*
 * FUN_004891f0 at 004891f0
 * undefined __register FUN_004891f0(int * param_1, LPCSTR param_2, uint param_3)
 * Address ranges: 004891f0-004893bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47ef98 slot 1 for TBlobStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47ef98 slot 1 for
   TBlobStream. Original bytes unchanged; names and types still inferred. */

void FUN_004891f0(int *param_1,LPCSTR param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_50;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_10;
  uint local_c;
  LPCSTR local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  puStack_20 = &LAB_004893bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = 0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if ((char)param_1[6] != '\0') {
    if ((char)param_1[9] == '\0') {
      uVar4 = thunk_FUN_00479aca(*(undefined4 *)(param_1[2] + 0x168));
      sVar6 = (short)uVar4;
      if ((sVar6 == 0) || (sVar6 == 0x2207)) {
        if (*(char *)(param_1[1] + 0xd8) != '\0') {
          FUN_0047fbc8(*(int *)(param_1[2] + 0x180),local_8,local_8,local_c);
        }
        if ((((*(char *)(param_1[2] + 0x1b5) != '\0') &&
             (iVar2 = FUN_004730d8(param_1[2]), iVar2 == param_1[3])) && ((char)param_1[4] == '\0'))
           && ((uVar5 = FUN_0046cde0(param_1[1]), (char)uVar5 == '\0' && (param_1[7] == param_1[10])
               ))) {
          param_1[10] = param_1[7] + local_c;
          FUN_00404364(param_1 + 8,param_1[7] + local_c);
          puVar3 = FUN_004041f4((undefined *)param_1[8]);
          FUN_00402944((undefined4 *)local_8,(undefined4 *)(puVar3 + param_1[7]),local_c);
          iVar2 = FUN_004147cc(param_1);
          if (iVar2 == param_1[10]) {
            FUN_00485260(param_1[2],param_1[1],param_1[3],(undefined4 *)param_1[8]);
            FUN_00403db0(param_1 + 8);
            *(undefined1 *)(param_1 + 9) = 1;
            uStackY_50 = *(undefined4 *)(param_1[2] + 0x168);
            thunk_FUN_00479ab8(uStackY_50);
          }
        }
        param_1[7] = param_1[7] + local_c;
        puVar1 = puStack_1c;
      }
      else {
        puVar1 = puStack_1c;
        if (sVar6 != 0x270e) {
          FUN_0047fe30(uVar4);
          puVar1 = puStack_1c;
        }
      }
    }
    else {
      puStack_1c = &stack0xfffffffc;
      iVar2 = FUN_004147cc(param_1);
      uVar4 = param_3;
      if (iVar2 - param_1[7] < (int)param_3) {
        iVar2 = FUN_004147cc(param_1);
        uVar4 = iVar2 - param_1[7];
      }
      local_c = uVar4;
      puVar1 = puStack_1c;
      if (0 < (int)local_c) {
        FUN_00485234(param_1[2],param_1[1],param_1[3],(int *)&local_10);
        puVar3 = FUN_004041f4(local_10);
        FUN_00402944((undefined4 *)(puVar3 + param_1[7]),(undefined4 *)local_8,local_c);
        param_1[7] = param_1[7] + local_c;
        puVar1 = puStack_1c;
      }
    }
  }
  puStack_1c = puVar1;
  *in_FS_OFFSET = uStackY_50;
  FUN_00403db0((int *)&local_10);
  return;
}

