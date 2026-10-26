/*
 * FUN_0053e674 at 0053e674
 * undefined __register FUN_0053e674(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * Address ranges: 0053e674-0053e701
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053e674(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  tagRECT local_28;
  POINT local_18;
  int local_10;
  undefined1 local_a;
  undefined1 local_9;
  int *local_8;
  
  local_a = (undefined1)param_3;
  local_9 = (undefined1)param_2;
  local_8 = param_1;
  if ((char)param_1[0xf9] != '\0') {
    FUN_0041160c(param_5,param_4,&local_18.x);
    local_10 = FUN_0042c948(local_8,&local_18,'\x01');
    if (local_10 != -1) {
      FUN_0042c9d4((int)local_8,local_10,&local_28);
      uVar1 = param_5 - local_28.left;
      if (SBORROW4(param_5,local_28.left)) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      if ((int)uVar1 < 0xf) {
        FUN_0053e704((int)local_8,local_10);
      }
    }
    (**(code **)(*local_8 + 0x74))();
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_004f85f0((int)local_8,CONCAT31((int3)((uint)param_2 >> 8),local_9),
               CONCAT31((int3)((uint)param_3 >> 8),local_a),param_4,param_5);
  return;
}

