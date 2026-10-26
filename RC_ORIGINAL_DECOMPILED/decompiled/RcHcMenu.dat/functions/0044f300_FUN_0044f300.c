/*
 * FUN_0044f300 at 0044f300
 * undefined __register FUN_0044f300(int param_1, int param_2)
 * Address ranges: 0044f300-0044f344
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044f300(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  puVar3 = (undefined4 *)0x0;
  while ((puVar2 = puVar1, puVar2 != (undefined4 *)0x0 && (param_2 != puVar2[1]))) {
    puVar3 = puVar2;
    puVar1 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)0x0) {
    DestroyCursor((HCURSOR)puVar2[2]);
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = *puVar2;
    }
    else {
      *puVar3 = *puVar2;
    }
    FUN_00402800((int)puVar2);
  }
  return;
}

