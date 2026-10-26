/*
 * FUN_005220d8 at 005220d8
 * undefined __register FUN_005220d8(int param_1, undefined4 * param_2, undefined1 param_3, undefined1 param_4)
 * Address ranges: 005220d8-00522120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005220d8(int param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  
  local_10 = *param_2;
  uStack_c = param_2[1];
  if (*(short *)(param_1 + 0x25a) != 0) {
    local_8 = param_1;
    (**(code **)(param_1 + 600))(*(undefined4 *)(param_1 + 0x25c),param_1,&local_10,param_4,param_3)
    ;
  }
  return;
}

