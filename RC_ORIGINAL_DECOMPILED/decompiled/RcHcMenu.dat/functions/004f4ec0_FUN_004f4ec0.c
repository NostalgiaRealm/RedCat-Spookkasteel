/*
 * FUN_004f4ec0 at 004f4ec0
 * undefined __register FUN_004f4ec0(int * param_1)
 * Address ranges: 004f4ec0-004f4f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f2904 slot 38 for TCustomTabControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f2904 slot 38 for
   TCustomTabControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f4ec0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_00435a24(param_1);
  if (param_1[0x7f] != 0) {
    bVar1 = FUN_0043e3b4(param_1[0x7f]);
    if (bVar1) {
      iVar2 = FUN_0043e588((int *)param_1[0x7f]);
      FUN_00433700((int)param_1,0x1303,0,iVar2);
    }
  }
  if (param_1[0x85] != 0) {
    FUN_004f54bc(param_1);
  }
  if (param_1[0x82] != 0) {
    (**(code **)(*(int *)param_1[0x84] + 8))((int *)param_1[0x84],param_1[0x82]);
    FUN_004f5300(param_1,param_1[0x81]);
    FUN_00403094((int *)param_1[0x82]);
    param_1[0x82] = 0;
  }
  return;
}

