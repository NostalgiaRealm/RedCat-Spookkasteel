/*
 * FUN_0043d004 at 0043d004
 * undefined __register FUN_0043d004(void)
 * Address ranges: 0043d004-0043d0ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d004(void)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  byte local_38 [32];
  DWORD local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  undefined1 local_4;
  
  uVar3 = 0;
  local_18 = GetCurrentProcessId();
  local_14 = 0;
  pbVar1 = FUN_0040a82c(local_38,(byte *)"Delphi%.8X",&local_18,uVar3);
  DAT_00573758 = GlobalAddAtomA((LPCSTR)pbVar1);
  uVar3 = 1;
  local_10 = DAT_005734dc;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  pbVar1 = FUN_0040a82c(local_38,(byte *)"ControlOfs%.8X%.8X",&local_10,uVar3);
  DAT_0057375a = GlobalAddAtomA((LPCSTR)pbVar1);
  DAT_0057378c = FUN_004126cc((int *)&DAT_004107e0,'\x01',extraout_ECX);
  FUN_0043cc1c();
  DAT_0057374c = FUN_0043ca2c((int *)&LAB_0042f858,'\x01',extraout_ECX_00);
  piVar2 = FUN_0044eee4((int *)&PTR_FUN_00447ef0,'\x01',(int *)0x0);
  *(int **)PTR_DAT_005725f0 = piVar2;
  piVar2 = FUN_0044ff18((int *)&PTR_FUN_004480ac,'\x01',(int *)0x0);
  *(int **)PTR_DAT_005723fc = piVar2;
  FUN_0044848c();
  FUN_00451864(*(int *)PTR_DAT_005723fc,'\x01');
  FUN_00411af8((int)&DAT_0042d9d0,0x42fb1c,0x42fb0c);
  return;
}

