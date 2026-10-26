/*
 * FUN_0044db54 at 0044db54
 * uint __register FUN_0044db54(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 0044db54-0044dbb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 52 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 52 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

uint FUN_0044db54(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_10;
  
  iVar1 = param_1;
  local_10 = param_3;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    local_10 = param_3 & 0xffffff00;
    iVar1 = FUN_0044b360(param_1);
    if (-1 < iVar1 + -1) {
      iVar4 = 0;
      iVar3 = iVar1;
      do {
        piVar2 = (int *)FUN_0044b3ac(param_1,iVar4);
        iVar1 = (**(code **)(*piVar2 + 0xd0))();
        if ((char)iVar1 == '\0') goto LAB_0044dbaf;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_10 = CONCAT31(local_10._1_3_,1);
  if (*(short *)(param_1 + 0x282) != 0) {
    iVar1 = (**(code **)(param_1 + 0x280))(*(undefined4 *)(param_1 + 0x284),param_1,&local_10);
  }
LAB_0044dbaf:
  return CONCAT31((int3)((uint)iVar1 >> 8),(undefined1)local_10);
}

