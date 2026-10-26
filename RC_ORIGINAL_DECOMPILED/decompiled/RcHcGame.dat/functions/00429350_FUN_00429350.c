/*
 * FUN_00429350 at 00429350
 * undefined FUN_00429350(void)
 * Address ranges: 00429350-00429438
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 29 for .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 29 for
   .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00429350(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  undefined1 *puVar6;
  float fStack_20;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if ((float)param_3 != 0.0) {
    FUN_004282e0();
    uVar1 = FUN_00595d60();
    fVar2 = (float10)FUN_005b15f0(uVar1);
    local_1c = (float)fVar2;
    puVar6 = local_c;
    (**(code **)(*param_1 + 0x48))(puVar6,local_18);
    FUN_005b2fe0(puVar6);
    fVar2 = (float10)FUN_005b15f0(&local_1c);
    fVar3 = (float10)FUN_005b1630((float)(fVar2 - (float10)fStack_20));
    fVar4 = (float10)FUN_00409e30(param_2);
    fVar5 = (float)(fVar4 * (float10)(float)param_1[0x52]);
    if (fVar5 <= ABS((float)fVar3)) {
      if ((float)fVar3 < 0.0) {
        fVar5 = -fVar5;
      }
      fVar2 = (float10)FUN_005b1630(fVar5);
    }
    else {
      fVar2 = (float10)(float)(fVar2 - (float10)fStack_20);
    }
    uVar1 = 0;
    fVar5 = (float)(fVar2 + (float10)fStack_20);
    FUN_004282e0(fVar5,0);
    FUN_00595ec0(fVar5,uVar1);
  }
  return;
}

