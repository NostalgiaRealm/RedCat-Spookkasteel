/*
 * FUN_00595f10 at 00595f10
 * undefined FUN_00595f10(void)
 * Address ranges: 00595f10-00595f5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 34 for .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 34 for
   .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00595f10(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  undefined1 local_c [12];
  
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_c);
  fVar1 = (float)param_1[0x4b];
  fVar2 = (float)puVar4[1];
  uVar3 = puVar4[2];
  *unaff_retaddr = *puVar4;
  unaff_retaddr[1] = fVar1 * 0.5 + fVar2;
  unaff_retaddr[2] = uVar3;
  return;
}

