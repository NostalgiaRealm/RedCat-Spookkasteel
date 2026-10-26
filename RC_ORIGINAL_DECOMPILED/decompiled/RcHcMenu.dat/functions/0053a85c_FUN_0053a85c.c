/*
 * FUN_0053a85c at 0053a85c
 * undefined __register FUN_0053a85c(int * param_1, undefined4 * param_2, char param_3, undefined1 param_4)
 * Address ranges: 0053a85c-0053a8c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053a85c(int *param_1,undefined4 *param_2,char param_3,undefined1 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  int *local_8;
  
  local_10 = *param_2;
  uStack_c = param_2[1];
  local_8 = param_1;
  if ((param_1[0xb2] == 0) && (((char)param_1[0xb6] == '\x01' || ((char)param_1[0xb6] == '\x02'))))
  {
    if (param_3 == '\0') {
      FUN_0053a230(param_1);
    }
    else {
      FUN_0053b274(param_1);
    }
  }
  FUN_005220d8((int)local_8,&local_10,param_3,param_4);
  return;
}

