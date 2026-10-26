/*
 * FUN_00406a48 at 00406a48
 * undefined __register FUN_00406a48(undefined4 * param_1, int * param_2)
 * Address ranges: 00406a48-00406a9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406a48(undefined4 *param_1,int *param_2)

{
  HINSTANCE hInstance;
  uint uVar1;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_408 [1024];
  
  lpBuffer = local_408;
  if (param_1 != (undefined4 *)0x0) {
    if ((int)param_1[1] < 0x10000) {
      cchBufferMax = 0x400;
      uID = param_1[1];
      hInstance = (HINSTANCE)FUN_00406500(*(int *)*param_1);
      uVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
      FUN_00403e98(param_2,(undefined4 *)local_408,uVar1);
    }
    else {
      FUN_00403f68(param_2,(char *)param_1[1]);
    }
  }
  return;
}

