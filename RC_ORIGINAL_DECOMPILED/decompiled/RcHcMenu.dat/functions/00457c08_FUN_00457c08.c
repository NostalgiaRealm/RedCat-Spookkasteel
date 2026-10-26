/*
 * FUN_00457c08 at 00457c08
 * undefined __register FUN_00457c08(int param_1, int param_2, int * param_3)
 * Address ranges: 00457c08-00457ca1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00457c08(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR lpWideCharStr;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x457c20;
  FUN_00457d9c(param_1);
  puStack_20 = &LAB_00457ca2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar1 = FUN_00457cd8(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00403db0(param_3);
  }
  else {
    lpWideCharStr = (LPCWSTR)(*(int *)(param_1 + 0xc) + *(int *)(iVar1 + 4));
    iVar1 = *(int *)(iVar1 + 8);
    cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00404364(param_3,cbMultiByte);
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    lpMultiByteStr = FUN_004041f4((undefined *)*param_3);
    WideCharToMultiByte(0,0,lpWideCharStr,iVar1,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                        lpUsedDefaultChar);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00457ca9;
  puStack_20 = (undefined1 *)0x457ca1;
  FUN_0045800c(param_1);
  return;
}

