/*
 * FUN_00542788 at 00542788
 * undefined __register FUN_00542788(int * param_1)
 * Address ranges: 00542788-005428d3;005428db-005428de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 50 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 50 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_00542788(int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x542799;
  local_8 = param_1;
  uVar2 = FUN_005416c0((int)param_1);
  if ((char)uVar2 != '\0') {
    puStack_10 = (undefined1 *)0x5427b5;
    cVar1 = (**(code **)(**(int **)(local_8[0xa0] + 0x214) + 100))();
    if ((cVar1 == '\0') || ((char)local_8[0x8a] == '\0')) {
      puStack_10 = (undefined1 *)0x5427d1;
      FUN_004efd24((int)local_8);
      puStack_10 = (undefined1 *)0x5427e1;
      FUN_00432800(local_8[0x9f]);
      *(undefined1 *)(local_8 + 0xa6) = 0;
      puStack_10 = (undefined1 *)0x5427ff;
      piVar3 = (int *)FUN_00549b80(*(int *)(local_8[0xa0] + 0x214));
      puStack_10 = (undefined1 *)0x54280f;
      cVar1 = FUN_00494528((int *)local_8[0x8b],piVar3);
      if (cVar1 == '\0') {
        local_9 = *(undefined1 *)(local_8[0x9f] + 0x22c);
        *(undefined1 *)(local_8[0x9f] + 0x22c) = 1;
        puStack_10 = (undefined1 *)0x542847;
        FUN_0045f830(local_8[0x8b]);
        puStack_14 = &LAB_005428d4;
        uStack_18 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_18;
        puStack_10 = &stack0xfffffffc;
        piVar3 = (int *)FUN_00549b80(*(int *)(local_8[0xa0] + 0x214));
        FUN_00541a50(local_8,piVar3);
        FUN_004f9b0c((int *)local_8[0x9f],local_8[0x8b]);
        (**(code **)(*(int *)local_8[0x9f] + 0xd4))();
        (**(code **)(*local_8 + 0xbc))();
        *in_FS_OFFSET = uStack_18;
        puStack_10 = (undefined1 *)0x5428db;
        *(undefined1 *)(local_8[0x9f] + 0x22c) = local_9;
        puStack_14 = (undefined1 *)0x5428d3;
        FUN_0045f898((undefined4 *)local_8[0x8b]);
        return;
      }
    }
  }
  return;
}

