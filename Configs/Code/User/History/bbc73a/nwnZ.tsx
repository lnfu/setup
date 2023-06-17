export default function Page() {
  return (
    <>
      <header className="flex justify-between items-center mb-4">
        <h1 className="text-2xl">New</h1>
      </header>
      <form className="flex gap-2 flex-col">
        <input type="text" name="title" className="border border-slate-300" />
      </form>
    </>
  )
}