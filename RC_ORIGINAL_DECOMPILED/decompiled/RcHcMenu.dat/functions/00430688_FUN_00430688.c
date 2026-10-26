/*
 * FUN_00430688 at 00430688
 * LRESULT __register FUN_00430688(HWND param_1, uint param_2, undefined4 param_3, undefined4 * param_4, undefined4 param_5)
 * Address ranges: 00430688-004306dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_00430688(HWND param_1,uint param_2,undefined4 param_3,undefined4 *param_4,
                    undefined4 param_5)

{
  LRESULT LVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  LVar1 = 0;
  if (param_1 != (HWND)0x0) {
    local_1c = *param_4;
    local_18 = param_4[1];
    local_10 = param_5;
    local_c = DAT_0057377c == '\x02';
    local_14 = param_3;
    local_8 = param_3;
    LVar1 = SendMessageA(param_1,0xb02f,param_2 & 0x7f,(LPARAM)&local_1c);
  }
  return LVar1;
}

