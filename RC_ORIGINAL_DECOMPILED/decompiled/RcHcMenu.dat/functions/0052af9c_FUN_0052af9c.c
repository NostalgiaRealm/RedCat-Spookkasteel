/*
 * FUN_0052af9c at 0052af9c
 * undefined4 __register FUN_0052af9c(int param_1)
 * Address ranges: 0052af9c-0052afee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 0 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 0 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0052af9c(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x84))();
    if ((char)uVar2 == '\0') goto LAB_0052afc2;
LAB_0052afe3:
    uVar3 = (undefined3)((uint)uVar2 >> 8);
    uVar1 = 1;
  }
  else {
LAB_0052afc2:
    if (*(char *)(param_1 + 0x80) == '\x02') {
      uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x88))();
      if ((char)uVar2 != '\0') goto LAB_0052afe3;
    }
    uVar1 = 0;
    uVar3 = 0;
  }
  return CONCAT31(uVar3,uVar1);
}

