/*
 * FUN_0040ce08 at 0040ce08
 * undefined __register FUN_0040ce08(int * param_1, LPCVOID param_2)
 * Address ranges: 0040ce08-0040ce7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ce08(int *param_1,LPCVOID param_2)

{
  undefined *puVar1;
  HINSTANCE hInstance;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_440 [64];
  byte local_400 [1024];
  
  FUN_0040cc80(param_1,param_2,local_400,(byte *)0x400);
  lpBuffer = local_440;
  if (*PTR_DAT_0057248c == '\0') {
    cchBufferMax = 0x40;
    uID = *(UINT *)(PTR_PTR_00572160 + 4);
    hInstance = (HINSTANCE)FUN_00406500(DAT_005734dc);
    LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
    MessageBoxA((HWND)0x0,(LPCSTR)local_400,local_440,0x2010);
  }
  else {
    puVar1 = (undefined *)FUN_004071a0(PTR_DAT_005721b0,(char *)local_400);
    FUN_00407123(puVar1);
    FUN_004028b8();
  }
  return;
}

