/*
 * FUN_00481980 at 00481980
 * undefined FUN_00481980(void)
 * Address ranges: 00481980-004819e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e374 slot 1 for .?AVCRcCutScene@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e374 slot 1 for
   .?AVCRcCutScene@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00481980(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 < 1) {
    iVar2 = *(int *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((iVar1 == 1) || (iVar1 == 3)) {
    param_3 = *(int *)(param_1 + 0x2c) + param_3;
    *(int *)(param_1 + 0x2c) = param_3;
    if (iVar2 <= param_3) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(uint *)(param_1 + 0xa8) = (-(uint)(iVar1 != 1) & 0xfffffffe) + 2;
    }
  }
  if ((iVar1 != *(int *)(param_1 + 0xa8)) && (iVar1 == 3)) {
    FUN_00480c80();
  }
  return;
}

