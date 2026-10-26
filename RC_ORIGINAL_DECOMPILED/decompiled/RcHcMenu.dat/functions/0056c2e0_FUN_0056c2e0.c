/*
 * FUN_0056c2e0 at 0056c2e0
 * undefined __register FUN_0056c2e0(void)
 * Address ranges: 0056c2e0-0056c402
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c2e0(void)

{
  LPCSTR lpParameters;
  HWND hwnd;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpOperation;
  char *lpFile;
  HINSTANCE *ppHVar1;
  LPCSTR lpDirectory;
  HINSTANCE pHVar2;
  HINSTANCE__ HVar3;
  undefined *local_1c;
  HINSTANCE local_18;
  HINSTANCE local_14;
  uint local_10;
  HINSTANCE local_c;
  undefined *local_8;
  
  local_14 = (HINSTANCE)&stack0xfffffffc;
  local_10 = 4;
  do {
    local_8 = (undefined *)0x0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = (HINSTANCE)&LAB_0056c403;
  local_1c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  HVar3.unused = (int)&local_8;
  FUN_00450eb0(*(int *)PTR_DAT_005723fc,(int *)&local_18);
  local_14 = local_18;
  local_10 = CONCAT31(local_10._1_3_,0xb);
  FUN_0040a894(&DAT_0056c418,&local_14,0,(int *)HVar3.unused);
  HVar3.unused = 5;
  lpDirectory = "";
  lpParameters = FUN_004041f4(local_8);
  lpFile = "SERVICE.EXE";
  lpOperation = "open";
  hwnd = (HWND)FUN_00438988(*(int **)(*(int *)PTR_DAT_005723fc + 0x38));
  local_c = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,HVar3.unused);
  if ((int)local_c < 0) {
    local_c = (HINSTANCE)thunk_FUN_00402874((uint)local_c);
  }
  if ((int)local_c < 0x21) {
    local_10 = local_10 & 0xffffff00;
    local_14 = local_c;
    FUN_0040a894((byte *)"Error: could not start Davi-Service, returnvalue %d",&local_14,0,
                 (int *)&local_1c);
    HVar3.unused = (int)local_1c;
    FUN_0056cffc(&DAT_0056ca40,0,0x56c47c,(int)local_1c);
    pHVar2 = (HINSTANCE)&stack0xffffffe0;
    FUN_00450eb0(*(int *)PTR_DAT_005723fc,(int *)&stack0xffffffdc);
    local_10 = CONCAT31(local_10._1_3_,0xb);
    ppHVar1 = &local_14;
    local_14 = pHVar2;
    FUN_00406a48(&PTR_DAT_0056c2d8,(int *)&stack0xffffffd8);
    FUN_0040a894((byte *)ppHVar1,ppHVar1,0,&pHVar2->unused);
    FUN_00457a04((undefined *)HVar3.unused,'\0');
  }
  *in_FS_OFFSET = local_1c;
  local_14 = (HINSTANCE)&LAB_0056c40a;
  local_18 = (HINSTANCE)0x56c3fa;
  FUN_00403dd4((int *)&stack0xffffffd8,5);
  local_18 = (HINSTANCE)0x56c402;
  FUN_00403db0((int *)&local_8);
  return;
}

