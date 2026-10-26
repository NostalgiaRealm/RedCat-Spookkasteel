/*
 * FUN_00564608 at 00564608
 * undefined __register FUN_00564608(int * param_1, undefined4 param_2)
 * Address ranges: 00564608-005646f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56449c slot published:FormCreate for TfrmMain. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56449c slot
   published:FormCreate for TfrmMain. Original bytes unchanged; names and types still inferred. */

void FUN_00564608(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HWND pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_1c = &LAB_005646f5;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_004a418c();
  FUN_004a48b8(uVar1,(undefined4 *)"FormCreate",0);
  *(undefined1 *)(local_8 + 0xb4) = 1;
  uVar2 = FUN_0044f0c0();
  uVar3 = FUN_0044f0b4();
  (**(code **)(*local_8 + 0x7c))(local_8,0,0,uVar3,uVar2);
  FUN_00450eb0(*(int *)PTR_DAT_005723fc,(int *)&local_10);
  FUN_00432744((int)local_8,local_10);
  pHVar4 = FindWindowA(PTR_s_Progman_00571fe0,(LPCSTR)0x0);
  local_8[0xb5] = (int)pHVar4;
  pHVar4 = FindWindowA(PTR_s_Shell_TrayWnd_00571fe4,(LPCSTR)0x0);
  local_8[0xb6] = (int)pHVar4;
  ShowWindow((HWND)local_8[0xb5],0);
  ShowWindow((HWND)local_8[0xb6],0);
  uVar1 = FUN_004a418c();
  FUN_004a49b0(uVar1);
  *in_FS_OFFSET = uVar3;
  puStack_20 = &LAB_005646fc;
  FUN_00403db0((int *)&local_10);
  return;
}

