/*
 * FUN_004714cc at 004714cc
 * undefined __register FUN_004714cc(int * param_1, char param_2)
 * Address ranges: 004714cc-00471548;00471550-00471590
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004714cc(int *param_1,char param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    puStack_10 = (undefined1 *)0x4714f5;
    uVar1 = FUN_004714b4((int)param_1);
    if (param_2 != (char)uVar1) {
      if (param_2 != '\0') {
        puStack_10 = (undefined1 *)0x47150c;
        (**(code **)(*param_1 + 0xf0))();
        puStack_14 = &LAB_00471549;
        uStack_18 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_18;
        puStack_10 = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x16c))(param_1,0);
        *in_FS_OFFSET = uStack_18;
        puStack_10 = (undefined1 *)0x47158d;
        if (*(char *)((int)param_1 + 0x8d) != '\f') {
          puStack_14 = (undefined1 *)0x471548;
          FUN_004715cc(param_1);
        }
        return;
      }
      if ((*(byte *)(param_1 + 8) & 8) == 0) {
        puStack_10 = (undefined1 *)0x471564;
        (**(code **)(*param_1 + 0xe0))();
      }
      puStack_10 = (undefined1 *)0x47156e;
      FUN_0047114c(param_1,'\0');
      puStack_10 = (undefined1 *)0x471579;
      (**(code **)(*param_1 + 0x9c))();
      if ((*(byte *)(param_1 + 8) & 8) == 0) {
        puStack_10 = (undefined1 *)0x47158d;
        (**(code **)(*param_1 + 0xbc))();
      }
    }
  }
  else {
    *(char *)((int)param_1 + 0x93) = param_2;
  }
  return;
}

