/*
 * FUN_0052a4d4 at 0052a4d4
 * undefined __register FUN_0052a4d4(int * param_1, undefined4 * param_2)
 * Address ranges: 0052a4d4-0052a654
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 12 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 12 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052a4d4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  VARIANT local_1c;
  char local_a;
  char local_9;
  int *local_8;
  
  pVVar2 = &local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_2c = (undefined1 *)0x52a4f4;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStack_30 = &LAB_0052a655;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (*(short *)((int)local_8 + 0x9a) == 0) {
    if ((local_8[0x21] == 0) && (local_8[0x22] == 0)) {
      local_9 = '\0';
    }
    else if ((local_8[0x21] == 0) || (local_8[0x22] != 0)) {
      if ((local_8[0x21] == 0) && (local_8[0x22] != 0)) {
        puStack_2c = &stack0xfffffffc;
        local_9 = FUN_00548824((int *)local_8[0x22],(undefined4 *)&local_1c);
        if (local_9 != '\0') {
          FUN_0052b638(local_8,'\x02');
        }
      }
      else {
        puStack_2c = &stack0xfffffffc;
        local_9 = FUN_00548824((int *)local_8[0x21],(undefined4 *)&local_1c);
        if (local_9 == '\0') {
          local_9 = FUN_00548824((int *)local_8[0x22],(undefined4 *)&local_1c);
          if (local_9 != '\0') {
            FUN_0052b638(local_8,'\x02');
          }
        }
        else {
          FUN_0052b638(local_8,'\x01');
        }
      }
    }
    else {
      puStack_2c = &stack0xfffffffc;
      local_9 = FUN_00548824((int *)local_8[0x21],(undefined4 *)&local_1c);
      if (local_9 != '\0') {
        FUN_0052b638(local_8,'\x01');
      }
    }
  }
  else {
    local_a = (char)local_8[0x20];
    puStack_2c = &stack0xfffffffc;
    local_9 = (*(code *)local_8[0x26])(local_8[0x27],local_8,&local_1c,&local_a);
    if (local_9 != '\0') {
      FUN_0052b638(local_8,local_a);
    }
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0052a65c;
  puStack_30 = (undefined1 *)0x52a654;
  FUN_00405bcc(&local_1c);
  return;
}

