/*
 * FUN_00519aa8 at 00519aa8
 * undefined __register FUN_00519aa8(int * param_1, WPARAM param_2, undefined4 param_3)
 * Address ranges: 00519aa8-00519afe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00519aa8(int *param_1,WPARAM param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = FUN_005199dc(param_1,param_2);
  *(undefined4 *)(iVar3 + 4) = param_3;
  puVar1 = (undefined4 *)param_1[0x92];
  if ((puVar1 != (undefined4 *)0x0) && (0 < (int)puVar1[2])) {
    uVar4 = FUN_00412384(puVar1,0);
    uVar5 = FUN_005191a8(uVar4);
    *(char *)(iVar3 + 8) = (char)uVar5;
    uVar2 = FUN_005191ac((char)uVar4);
    *(undefined1 *)(iVar3 + 9) = uVar2;
    FUN_00412224((int *)param_1[0x92],0);
  }
  return;
}

