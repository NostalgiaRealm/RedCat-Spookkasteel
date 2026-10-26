/*
 * FUN_0057a550 at 0057a550
 * undefined FUN_0057a550(void)
 * Address ranges: 0057a550-0057a5a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fab4 slot 2 for .?AVCAdamEffectCorona@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fab4 slot 2 for
   .?AVCAdamEffectCorona@@. Original bytes unchanged; names and types still inferred. */

void FUN_0057a550(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  float10 fVar5;
  
  cVar1 = FUN_00421560();
  if (cVar1 != '\0') {
    iVar2 = FUN_00518cf0();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar2 + 100) = iVar4;
    }
    if ((iVar4 == 0) && (param_2 != 0)) {
      fVar5 = (float10)FUN_00409e30(param_2);
      FUN_0057a5b0((float)fVar5);
    }
  }
  return;
}

