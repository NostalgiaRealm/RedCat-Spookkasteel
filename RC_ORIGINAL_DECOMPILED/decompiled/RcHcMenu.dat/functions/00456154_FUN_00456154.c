/*
 * FUN_00456154 at 00456154
 * uint __register FUN_00456154(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00456154-0045617c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot 34 for TSplitter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot 34 for
   TSplitter. Original bytes unchanged; names and types still inferred. */

uint FUN_00456154(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_8;
  undefined3 uStack_7;
  
  _local_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x172) != 0) {
    param_1 = (**(code **)(param_1 + 0x170))
                        (*(undefined4 *)(param_1 + 0x174),param_1,param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),local_8);
}

