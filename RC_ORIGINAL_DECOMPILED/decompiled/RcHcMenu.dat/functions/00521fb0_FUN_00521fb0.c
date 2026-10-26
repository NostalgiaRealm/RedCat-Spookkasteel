/*
 * FUN_00521fb0 at 00521fb0
 * undefined __register FUN_00521fb0(int param_1, undefined4 * param_2, undefined1 param_3, undefined1 param_4)
 * Address ranges: 00521fb0-00521ff8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521fb0(int param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  
  local_10 = *param_2;
  uStack_c = param_2[1];
  if (*(short *)(param_1 + 0x252) != 0) {
    local_8 = param_1;
    (**(code **)(param_1 + 0x250))
              (*(undefined4 *)(param_1 + 0x254),param_1,&local_10,param_4,param_3);
  }
  return;
}

